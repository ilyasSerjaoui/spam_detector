#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <vector>
#include "spam_detector.cpp"
using namespace std;

struct s_d{
    public: 
        string l="abcdefjhigklmnopqrstuvwxyz";
        string n="1234567890";
        string l_us[10]={
            "47W13thSt,NewYork,NY10011,USA","20CooperSquare,NewYork,NY10003,USA","1E2ndSt,NewYork,NY10003,USA", 
            "753rdAve,NewYork,NY10003,USA","MetrotechCenter,Brooklyn,NY11201,USA","721Broadway,NewYork,NY10003,USA",
            "40E7thSt,NewYork,NY10003,USA","838Broadway,NewYork,NY10003,USA","69W9thSt,NewYork,NY10011,USA", 
            "19WashingtonSquareN,NewYork,NY10011,USA"
        };
        string job[10]={
            "Enterprise_architect", "Full_stack_engineer", "Data_scientist", "DevOps_engineer", "Strategy_manager",
            "Machine_learning_engineer", "Data_engineer", "Software_engineer", "Java_developer", "Product_manager"
        };
        string f_h[10]={
            "sport", "reading", "watching", "gaming", "walking", "social_media", "learn", "discovery", "music", "coffee"
        };
        string s_f[10]={
            "soccer", "boxing", "footBall_american", "basketBall", "cricket", 
            "tennis", "volley-Ball", "golf", "mma", "chess"
        };
        string c_s_f[10]={
            "Vintage_fashion_style", "Artsy_fashion_style", "Casual_fashion_style", "Grunge_style_clothing", "Chic_fashion_style",
            "Bohemian_fashion_style", "Sexy_fashion_Style", "Exotic_fashion_style"
        };
        string f_s_f[10]={
            "French_Cuisine", "Chinese_Cuisine", "Japanese_Cuisine", "Indian_Cuisine", "Italian_Cuisine", "Greek_Cuisine", 
            "Spanish_Cuisine", "Mediterranean_Cuisine"
        };
};

void p_d_l(int rn){
    ofstream fs("library.dat", ios::app);
    s_d sd_; 
    string lr[10];
    for(int i=0;i<=4;i++){
        lr[i]=sd_.l[(rand()%6)+i];
    } 
    for(int j=0; j<=4; j++){
       fs<<lr[j];
    }
    fs<<"@gmail.com"<<endl;
    fs<<sd_.l_us[rn]<<endl;
    fs<<sd_.job[rn]<<endl;
    fs<<sd_.f_h[rn]<<endl;
    fs<<sd_.s_f[rn]<<endl;
    fs<<sd_.c_s_f[rn]<<endl;
    fs<<sd_.f_s_f[rn]<<endl;
}

int main(){
    srand((unsigned)time(0));
    int x=0; 
    g_u gu_; e_d ed_;
    ifstream fsr("library.dat");
    vector<string> e_dg; int k=0;
    string ed;
    while(x<=10){
        p_d_l((rand()%6));
        x++;
    }
    while(fsr >> ed){
        e_dg.push_back(ed);
    }
    for(int f=0; f<=70; f++){
        if(f==0){
            ed_.e_s.push_back(e_dg[f]);
            gu_.e.push_back(e_dg[f]);
        }else{
            gu_.e.push_back(e_dg[f+6]);
            ed_.e_s.push_back(e_dg[f+6]);
            f=f+6;
        }
    }
    for(int h=3; h<=70; h++){
        if(h==3){
            ed_.f_h.push_back(e_dg[h]);
            gu_.h.push_back(e_dg[h]);
        }else{
            gu_.h.push_back(e_dg[h+6]);
            ed_.f_h.push_back(e_dg[h+6]);
            h=h+6;
        }
    }
    ed_.s_p();
    gu_.s_d(ed_);
    return 0;
}