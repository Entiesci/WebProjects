#include<bits/stdc++.h>
using namespace std;


char res;
string title,author,url;

signed main(){
//    printf("Sure to generate? (Y/N)");
//    res=getchar();
//    if(res=='N')exit(0);

    freopen("database.db.txt","r",stdin);
    freopen("part.html.txt","w",stdout);
    while(cin>>title>>author>>url){
        cerr<<title<<author<<url<<endl;
        cout<<"<div class=\"swiper-slide\"><div class=\"product-card\"><div class=\"image-holder\"><img src=\"img/blbl.jpg\" alt=\"product-item\" class=\"img-fluid\"></div><div class=\"card-detail text-center pt-3 pb-2\"><h5 class=\"card-title fs-4 text-uppercase m-0\"><a href=\""<<url<<"\">"<<title<<"</a></h5><div class=\"cart-button mt-1\">"<<author<<"</div></div></div></div>\n";
    }
    return 0;
}