void merge(int arr[], int l, int m, int r)
{

    int i,j,k;
    int n1 = m-l+1;
    int n2 = r-m;
    
    int L[n1], R[n2];
    
    for(i=0;i<n;i++)
    {
      L[i]= arr[i];  
    }
    
    for(j=0;j<n2;j++)
    {
      L[j] = arr[j];
    }

    while(i<n1 && i<n2) {
    
      if(L[i] <= R[j]
      {
        arr[k] = L[i];
        i++;
      }
      else {
        arr[k] = R[j];
        j++;
        }
        k++;
    }
    

void merge_sort(int arr[], int l, int r) {

  if(l<r)
  {
    int m = l + (r-l)/2;
    mergesort(arr,l,m);
    mergesort(arr,m+1,r);
    merge(arr,l,m,r);
  }
}  
