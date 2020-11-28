void swap(int* nums, int i, int j) {
  int temp = nums[i];
  nums[i] = nums[j];
  nums[j] = temp;
}

int partition(int* nums, int i, int j, int k) {
  if(j - i <= 1) {
    return nums[i];
  }
  int l = i + 1, r = j;
  int pivot = nums[i];
  while(l < r) {
    if(nums[l] < pivot) {
      swap(nums, l, r - 1);
      r--;
    }
    else l++;
  }
  swap(nums, i, l - 1);
  if(l - 1 - i == k) return nums[l - 1];
  else if(l - 1 - i > k) return partition(nums, i, l - 1, k);
  return partition(nums, l, j, k - l + i);
}

int findKthLargest(int* nums, int len, int k) {
  int ans = partition(nums, 0, len, k - 1);
  return ans;
}