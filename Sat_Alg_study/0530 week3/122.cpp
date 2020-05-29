class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        
        for (int i=1; i<prices.size(); i++) {
            if (prices[i] > prices[i-1])
                profit += prices[i] - prices[i-1];
        }
        return profit;
    }
};

/*
가격 배열에 i요소는 i에 거래된 금액이다
최대 이익값 계산해라
거래 전까지 넌 어떤 거래도 할수 없다?? 팔기전까지 구매할수없다??


*/
