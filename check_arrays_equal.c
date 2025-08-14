
int equal(int arr[], int size, int arr1[], int size1){
         if(size != size1)
            return 0;
	 for(int i = 0; i < size; ++i){
	     if(arr[i] != arr1[i])
		return 0;
	 }
        return 1;
}



