#include<cstdio>
#include<climits>
#include<algorithm>
using namespace std;
struct node{
		int max;
		int sum;
		int prefixsum,suffixsum;
};
node tree[4*50010];
int arr[50010];
void build(int index,int start,int end)
{
	if(start==end)
	{
		tree[index].max=arr[start];
		tree[index].sum=arr[start];
		tree[index].prefixsum=arr[start];
		tree[index].suffixsum=arr[start];
	}
	else
	{
		int mid=(start+end)/2;
		build(2*index+1,start,mid);
		build(2*index+2,mid+1,end);
		tree[index].sum=tree[2*index+1].sum+tree[2*index+2].sum;
		tree[index].prefixsum=max(tree[2*index+1].prefixsum,tree[2*index+1].sum+tree[2*index+2].prefixsum);
		tree[index].suffixsum=max(tree[2*index+2].suffixsum,tree[2*index+2].sum+tree[2*index+1].suffixsum);
		tree[index].max=max(tree[index].prefixsum,max(tree[index].suffixsum,max(tree[2*index+1].max,max(tree[2*index+2].max,tree[2*index+1].suffixsum+tree[2*index+2].prefixsum))));
	}
}
node query(int index,int start,int end,int l,int r)
{
	node result;
	result.sum=INT_MIN,result.max=INT_MIN,result.prefixsum=INT_MIN,result.suffixsum=INT_MIN;
	if(l>end || r<start)
	return result;
	if(l<=start && r>=end)
	return tree[index];
	int mid=(start+end)/2;
	if(l>mid)
	return query(2*index+2,mid+1,end,l,r);
	if(r<=mid)
	return query(2*index+1,start,mid,l,r);
	node left=query(2*index+1,start,mid,l,r);
	node right=query(2*index+2,mid+1,end,l,r);
	result.sum=left.sum+right.sum;
	result.prefixsum=max(left.prefixsum,left.sum+right.prefixsum);
	result.suffixsum=max(right.suffixsum,right.sum+left.suffixsum);
	result.max=max(result.prefixsum,max(result.suffixsum,max(left.max,max(right.max,left.suffixsum+right.prefixsum))));
	return result;
}
int main()
{
	int n,m,i,a,b;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	build(0,0,n-1);
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d %d",&a,&b);
		printf("%d\n",query(0,0,n-1,a-1,b-1).max);
	}
	return 0;
}
