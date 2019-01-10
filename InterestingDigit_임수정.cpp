#include<vector>
using namespace std;

class InterestingDigits{
public:
    vector<int> digits(int base){
    	vector<int> ans;
        
        for(int n = 2; n < base ; n++){
        	bool ok = true;
            for(int a = 2 ; a < base ; a++){
                for(int b = 2 ; b < base ; b++){
                    for(int c = 2 ; c < base ; c++){
                        if((a + b*base + c*base*base) % n == 0 && (a+b+c)%n != 0){                            
                        	ok = false;
                            break;
                        }
                   	}
                    if(!ok) break;
                }
                if(!ok) break;
            }
            if(ok) ans.push_back(n);
        }
        return ans;
    }
};
