//给你一个有序数组nums，原地删除重复出现的元素，使每个元素只出现一次，返回删除后数组的新长度
//思路一 暴力求解 比较相同元素的数组 有两个相同的就向前移动一个位置 b是计算删掉了几个元素
//i-- 删除元素后重新从该位置开始判断 只需重复 numsize-b次
#include<stdio.h>
int RemoveDuplicates(int* nums,int numsize)
{
	int i,j,count,tmp=0,b=0;
	for(i=0;i<numsize;i++)
	{
		count=0;
		for(j=i;j<numsize-b;j++)
		{
			if(nums[i]==nums[j])
				count++;
			else break;
		}
		if(count>1)
		{
			tmp=i;
			while(tmp<numsize-1)
			{
				nums[tmp]=nums[tmp+1];
				tmp++;
			}
			i--;
			b++;
		}
	}
		return numsize-b;
	
}
int main()
{
	int nums[10]={1,2,3,4,5,6,6,8,9,10};
	int numsize=sizeof(nums)/sizeof(nums[0]);
	int tmp=0;
	int i;
	tmp=RemoveDuplicates(nums,numsize);
	printf("新长度为%d\n",tmp);
	for(i=0;i<tmp;i++)
	{
		printf("%d ",nums[i]);
	}
	return 0;
}

//定义i，j,dst三个位置 i,j判断相同元素 dst存放元素

#include<stdio.h>
int RemoveDuplicates(int* nums,int numsize)
{
	int i=0,j=1,dst=0;
	while(j<numsize)
	{
		if(nums[i]==nums[j])
		{
				j++;

		}
		else
		{
	nums[dst]=nums[i];
	dst++;
	i=j;
	j++;
		}
	}
	nums[dst]=nums[i];
	return dst+1;
	
}
int main()
{
	int nums[3]={1,2,2};
	int numsize=sizeof(nums)/sizeof(nums[0]);
	int tmp=0;
	int i;
	tmp=RemoveDuplicates(nums,numsize);
	printf("新长度为%d\n",tmp);
	for(i=0;i<tmp;i++)
	{
		printf("%d ",nums[i]);
	}
	return 0;
}