#include<bits/stdc++.h>
using namespace std;


char res;
string tit,aut,url;

signed main(){
//    printf("Sure to generate? (Y/N)");
//    res=getchar();
//    if(res=='N')exit(0);

    freopen("database.db.txt","r",stdin);
    freopen("all_html.part.txt","w",stdout);
    while(cin>>tit>>aut>>url){
        // cerr<<tit<<aut<<url<<endl;
        cout<<"<div class=\"col-md-4 mb-2\"><div class=\"card border-0 rounded-0\"><div class=\"card-image\"><img src=\"img/blbl.jpg\" alt=\"blog-img\" class=\"img-fluid\"></div></div><div class=\"card-body text-capitalize\"><div class=\"card-meta fs-6\"><span class=\"meta-category\"><a href=\"https://search.bilibili.com/all?keyword="<<aut<<"\">"<<aut<<"</a></span></div><h4 class=\"card-tit\"><a href=\""<<url<<"\" target=\"_blank\">"<<tit<<"</a></h4></div></div>\n";
    }
    return 0;
}
