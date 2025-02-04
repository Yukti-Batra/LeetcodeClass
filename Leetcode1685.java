class Solution {
  public int[] getSumAbsoluteDifferences(int[] nums) {
        int totalSum = 0;
            for (int num : nums) {
                totalSum += num;
            }
    
            int n = nums.length; // Store the length of the array
            int[] result = new int[n]; // Initialize the result array to store answers
            int prefixSum = 0; 
            for (int i = 0; i < n; ++i) {
                int sumAbsoluteDifferences = nums[i] * i - prefixSum + totalSum - prefixSum - nums[i] * (n - i);
                result[i] = sumAbsoluteDifferences; // Assign the computed value to the result array
                prefixSum += nums[i]; // Update the prefix sum with the current element's value
            }
    
            // Return the final result array
            return result;
        }
    }