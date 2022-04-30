#include <iostream>
#include <string>
#include <ctime>
#include <vector>
#include <map>
#include <fstream>
using namespace std;

class e_d{
    public:
        vector<string> e_s;
        vector<string> f_h;
        vector<string> es_; vector<string> fh_;
        void s_p(){
            srand((unsigned)time(0));
            for(int d=0; d<=10; d++){
                es_.push_back(e_s[(rand()%9)+d]);
                fh_.push_back(f_h[(rand()%9)+d]);
            }
        }
    friend class g_u;
};