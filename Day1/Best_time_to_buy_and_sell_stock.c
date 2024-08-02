int maxProfit(int* prices, int size) {
    if(size<2){
        return 0;
    }
    if(size==2){
        if(prices[0]<prices[1]){
            return prices[1]-prices[0];
        }
        else{
            return 0;
        }
    }
    int min=prices[0];
    int maxprofit=0;
    for(int i=1;i<size;i++){
        if(prices[i]<min){
            min=prices[i];
        }
        else{
            int curprofit=prices[i]-min;
            if(curprofit>maxprofit){
                maxprofit=curprofit;
            }
        }
    }
    return maxprofit;
    
}