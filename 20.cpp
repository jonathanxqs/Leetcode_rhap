class Solution {
public:

    const vector<char> brackets = { '(', '[' , '{' , ')' , ']' ,'}'};

    bool isValid(string s) {
        for (auto c:s){
            if ( std::find( brackets.begin(), brackets.end() ,c)  == brackets.end() )
                return false;
        }

        while (true){

            if ( s.empty() ) return true; // end ,suc
            auto it1 = std::find( s.begin(), s.end() , ')');
            auto it2 = std::find( s.begin(), s.end() , ']');
            auto it3 = std::find( s.begin(), s.end() , '}');
            if ( it1 == s.end() and it2 == it1 and it3 == it1) return false;

            if (it1 < it2 and it1 < it3){
                if (it1 == s.begin()) return false; // no peer
                if ( *(it1-1) != '(' ) return false;
                s.erase(it1-1);
                // seams wrong , s.erase(it1);
                s.erase(it1-1); 
                continue;
            } 
            if (it2 < it1 and it2 < it3){
                if (it1 == s.begin()) return false; // no peer
                if ( *(it2-1) != '[' ) return false;
                s.erase(it2-1);
                s.erase(it2-1);
                continue;
            }
            if (it3 < it1 and it3 < it2){
                if (it3 == s.begin()) return false; // no peer
                if ( *(it3-1) != '{' ) return false;
                s.erase(it3-1);
                s.erase(it3-1);
                continue;
            }

            return false;

        }

        return true;
    }
};