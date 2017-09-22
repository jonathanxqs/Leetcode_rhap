// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(string &S) {
    // write your code in C++14 (g++ 6.2.0)
    
    int len_s = S.size();
    int i=0,j,k,left,rt_ans = -1;
    bool upCase1 = false;
    left = 0;
    
    while (i<len_s){
        if(S[i] <='9' and S[i] >= '0'){
            upCase1 = false;
            
            i++;
            left=i;
            continue;
            }
            
        if(S[i] <='Z' and S[i] >= 'A'){
            upCase1 = true;  
            }
            
        if (i-left+1 > rt_ans and upCase1){
                rt_ans = i-left+1;
            }  
        i++;
    }
    
    return rt_ans;
    
        
    
}