//����һ����������nums��ԭ��ɾ���ظ����ֵ�Ԫ�أ�ʹÿ��Ԫ��ֻ����һ�Σ�����ɾ����������³���
//˼·һ ������� �Ƚ���ͬԪ�ص����� ��������ͬ�ľ���ǰ�ƶ�һ��λ�� b�Ǽ���ɾ���˼���Ԫ��
//i-- ɾ��Ԫ�غ����´Ӹ�λ�ÿ�ʼ�ж� ֻ���ظ� numsize-b��
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
	printf("�³���Ϊ%d\n",tmp);
	for(i=0;i<tmp;i++)
	{
		printf("%d ",nums[i]);
	}
	return 0;
}

//����i��j,dst����λ�� i,j�ж���ͬԪ�� dst���Ԫ��

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
	printf("�³���Ϊ%d\n",tmp);
	for(i=0;i<tmp;i++)
	{
		printf("%d ",nums[i]);
	}
	return 0;
}