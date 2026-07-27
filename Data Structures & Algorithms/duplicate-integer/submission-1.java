class Solution {
    public boolean hasDuplicate(int[] nums) {
        HashMap<Integer, Integer> set = new HashMap<>();
        int num;
        //key is num and value is how many times its there
        for (int i = 0; i < nums.length; i++) {
            num = nums[i];
            if (set.get(num) == null) {
                set.put(num, 1);
            } else {
                set.put(num, set.get(num) + 1);
            }
        }

        for (int key : set.keySet()) {
            if (set.get(key) > 1) {
                return true;
            }
        }
        
        return false;
    }
}