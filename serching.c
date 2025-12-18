4 #include<stdio.h>
 int seqsearch(int[],int,int);
 int main(void)
 {
 	int list[20], target,index,i,size;
 	printf("enter the size of list:");
 	scanf("%d",&size);
 	printf("enter any %d elements:\n",size);
 	for (i=0;i<size;i++)
 	scanf("%d",&list[i]);
 	
 	printf("enetr a target value to search:");
 	scanf("%d",&target);
 	
 	index=seqsearch(list,target,size);
 	if(index==-1)
 	printf("%d isn't present in the list.\n",target);
 	else
 	printf("%d is present at index %d in the list",target,index);
 	return 0;
 }
 int seqsearch(int list[],int target,int size)
 {
 	int index;
 	for (index=0; index<size;index++)
	 if(list[index]==target)
	 return index;
	 return -1;
	  }