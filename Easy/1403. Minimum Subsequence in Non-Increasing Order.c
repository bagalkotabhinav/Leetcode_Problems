/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

void QuickSort(int a[], int left, int right)
       {
              int i = left;
              int j = right;
              int temp = a[i];

       if( left < right)
              {
                     while(i < j)
                     {
                            while(a[j] <= temp && i < j)
                            {
                                   j--;
                            }
                            a[i] = a[j];

                     while(a[i] >= temp && i < j)
                            {
                                   i++;
                            }
                            a[j] = a[i];
                     }
                     a[i] = temp;

              QuickSort(a, left, i - 1);
                     QuickSort(a, j + 1, right);
              }
       }

int sumv(int arr[],int s,int n){
     int sum=0;
     for(int i=s;i<=n;i++){
       sum+=arr[i];
     }
     return sum;
}

int* minSubsequence(int* nums, int numsSize, int* returnSize){
      QuickSort(nums,0,numsSize-1);
      int arr[numsSize];
      for(int i=0;i<numsSize;i++){
           arr[i]=nums[i];
          if(sumv(arr,0,i)>sumv(nums,i+1,numsSize-1)){
            break;
          }
      }
      return arr;
}
