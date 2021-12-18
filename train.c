#include<stdio.h>


void sort(int *A,int n)
{
    int i,j,smallest_index;
    int temp;
    for(i=0;i<n;i++)
    {
        smallest_index = i;
        for(j=i+1;j<n;j++)
        {
            if(A[j]<A[smallest_index])
            {
                smallest_index = j;
            }
        }
        temp = A[i];
        A[i] = A[smallest_index];
        A[smallest_index] = temp; 
    }

}
int find_platform(int *arr,int *dep)
{
    sort(arr,6);
    sort(dep,6);
    int i =1,j =0,pt_no = 1,result =1;
    while(i<6 && j<6)
    {
        if(arr[i]<=dep[j])
        {
        pt_no++;
        i++;
        if(pt_no < result)
        result = pt_no;
        }
        else
        {
            pt_no --;
            j++;
        }
    }
    return result;
}
int main(){
    int sol;
    arr[] = [9:00, 9:40, 9:50, 11:00, 15:00, 18:00];
	dep[] = [9:10, 12:00, 11:20, 11:30, 19:00, 20:00];
    sol = find_platform(arr,dep);
    printf("the min no of platform required %d",sol);
    
return 0;
}
