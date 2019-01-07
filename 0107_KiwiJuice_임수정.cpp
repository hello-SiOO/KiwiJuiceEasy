//
//  main.cpp
//  0107_KiwiJuice_임수정
//
//  Created by 임수정 on 07/01/2019.
//  Copyright © 2019 임수정. All rights reserved.
//

#include <algorithm>
#include <vector>
using namespace std;

class KiwiJuiceEasy{
public: vector <int> thePouring(vector<int> capacities, vector<int> bottles, vector<int>fromId, vector<int> toId){
    
    for(int i = 0 ; i < fromId.size() ; i++){
        int from = fromId[i];
        int to = toId[i];
        int space = capacities[toId[i]] - bottles[toId[i]];
        if(space <= bottles[from]){
            bottles[to] += space;
            bottles[from] -= space;
        }
        else{
            bottles[to] += bottles[from];
            bottles[from] = 0;
        }
    }
    return bottles;
}
};
