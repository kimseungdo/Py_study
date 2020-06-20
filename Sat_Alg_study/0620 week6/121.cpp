class Solution {
    public int maxProfit(int[] prices) {
    int answer = 0;
    int length = prices.length;
    int minPrice = Integer.MAX_VALUE;
        
    for (int i = 0; i < length; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        }else {
            int i1 = prices[i] - minPrice;
            if (i1 > answer){
                answer = i1;
            }
        }
    }
    return answer;
}
}