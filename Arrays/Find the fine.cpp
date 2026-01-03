class Solution {
  public:
    long long int totalFine(int date, vector<int> &car, vector<int> &fine) {
        
        long long total = 0;
        bool dateEven = (date % 2 == 0);
        
        for(int i = 0; i < car.size(); i++) {
            bool carEven = (car[i] % 2 == 0);
            
            if(dateEven && !carEven)
                total += fine[i];
            else if(!dateEven && carEven)
                total += fine[i];
        }
        
        return total;
    }
};
