#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "spamer.cpp"
using namespace std;

class g_u{
    public: 
        vector<string> e;
        vector<string> h;
        void s_d(e_d ed_){
            for(int u=0; u<=10; u++){
                if(ed_.es_[u]==e[u]){
                    if(ed_.fh_[u]==h[u]){
                        cout<<"Your information has been correct.. "<<endl;
                    }else if(ed_.fh_[u].empty()){
                        cout<<"please, you must found address email for sending.."<<endl;
                    }else{
                        cout<<"Warning..."<<endl;
                    }
                }else if(ed_.es_[u].empty()){
                    cout<<"please, you must found address email for sending.."<<endl;
                }else{
                    cout<<"Warning.. "<<endl;
                }
            }
        }
};
