class Solution {
  public:
   static bool cmp (const pair<double,double>&a ,const pair<double,double>&b){
        double r1=(double)(a.first/a.second*1.0);
        double r2=(double)(b.first/b.second*1.0);
        return r1>r2;
    }
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        // code here
        vector<pair<double,double>>valwt;
        for(int i=0;i<val.size();i++){
            valwt.push_back({val[i],wt[i]});
        }
        sort(valwt.begin(),valwt.end() ,cmp);
        double cost=0.0;
        
        for(double i=0;i<valwt.size();i++){
            if(capacity==0)return cost;
            if(valwt[i].second<=capacity){
                cost+=valwt[i].first;
                capacity-=valwt[i].second;
            }
            else if(valwt[i].second>capacity){
                int remai=capacity;
                capacity=0;
                double remaicost=double(valwt[i].first/valwt[i].second*1.0);
                cost+=remaicost*remai;
            }
        }
        return cost;
    }
};
