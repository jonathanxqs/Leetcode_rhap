class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    	string a,b;
    	int i=0,j,k,l=0,r=0;
    	int len_s=s.size(),max_len=0;
    	a="";

    	std::map<char, std::vector<int> > map_char;

    	for (i=1;i<=len_s;i++){
    		
    		map_char[s[i-1]].push_back(i-1);
    		
    	}

    	max_len=0;

    	for (char c='a';c<='z';c++){
    		const std::vector<int> &v=map_char[c];
    		int delta_now=0,i=0;

    		for (auto s=v.begin();s<v.end();v++){    			
    			if (s==v.begin()) continue;
    			delta_now=*s-*(s-1);
    			if (delta_now>max_len)    
    				max_len=delta_now;			
 
    		}

    	}

    	if (max_len==0) return len_s;


    	return max_len;

        
    }
};