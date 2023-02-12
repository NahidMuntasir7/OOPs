/*
#include<iostream>
using namespace std;
class father
{
int money; protected:
int gold; public: int
land; void
set_money(){ cout
<<"Enter money:";
cin>>money;
}
int get_money(){
return money;
}
};
class son : public father
{
public:
int x;
void set_gold_son()
{
cout<<"Deposit gold:";
cin >>x;
gold=x;
}
int get_gold_son()
{
return gold;
}
};
class grandson: public son
{
public:
int x;
};
int main()
{ son ob;
cout<<"Publicly inherited son class:\n";
ob.set_money(); ob.set_gold_son();
cout<<"Enter land :";
cin>>ob.land;
cout<<"Money of son:"<<ob.get_money()<<endl; cout<<"Gold of son:"<<ob.get_gold_son()<<endl;
cout<<"Land of son:"<<ob.land<<endl; cout<<"Publicly inherited grandson class:\n"; grandson
ob_grandson;
ob_grandson.set_money();
ob_grandson.set_gold_son();
cout<<"Enter land of grandson:";
cin>>ob_grandson.land;
cout<<"Money of
grandson:"<<ob_grandson.get_money()<<endl;
cout<<"Gold of
grandson:"<<ob_grandson.get_gold_son()<<endl;
cout<<"Land of grandson:"<<ob_grandson.land<<endl;
return 0;
}
*/



/*
#include<iostream>
using namespace std;
class father
{
int money;
protected:
int gold;
public:
int land;
int set_money()
{
cout <<"Enter money:";
cin>>money;
}
int get_money()
{
return money;
}
};
class son : protected father
{
public: int
get_money_son()
{
get_money();
}
int set_money_son()
{
set_money();
}
int x;
void set_gold_son()
{
cout<<"Deposit gold:";
cin >>x; gold=x;
}
int get_gold_son()
{
return gold;
}
void set_land_son()
{ cin >>
x;
land=x;
}
int get_land_son()
{
return land;
}
};
class grandson: public son
{
public:
};
int main()
{ son ob;
cout<<"Protectedly inherited son class:\n";
ob.set_money_son(); ob.set_gold_son();
cout<<"Enter land:";
ob.set_land_son(); cout<<"Money of
son:"<<ob.get_money_son()<<endl; cout<<"Gold of
son:"<<ob.get_gold_son()<<endl; cout<<"Land of
son:"<<ob.get_land_son()<<endl;
cout<<"Publicly inherited grandson class:\n"; grandson ob2;
ob2.set_money_son(); ob2.set_gold_son(); cout<<"Enter
land :"; ob2.set_land_son(); cout<<"Money of
grandson:"<<ob2.get_money_son()<<endl; cout<<"Gold of
grandson:"<<ob2.get_gold_son()<<endl; cout<<"Land of
grandson:"<<ob2.get_land_son()<<endl; return 0;
}
*/




/*
#include<iostream>
using namespace std;
class father
{
int money;
protected:
int gold;
public:
int land;
void set_money()
{
cout <<"Enter money:";
cin>>money;
}
int get_money()
{
return money;
}
};
class son: private father
{
public: int
get_money_son()
{
get_money();
}
int set_money_son()
{
set_money();
}
int x;
void set_gold_son()
{
cout<<"Deposit gold:";
cin >>x; gold=x;
}
int get_gold_son()
{
return gold;
}
void set_land_son()
{ cin >>
x;
land=x;
}
int get_land_son()
{
return land;
}
};
class grandson: public son
{
public:
};
int main()
{ son ob;
cout<<"Privately inherited son class:\n"; ob.set_money_son();
ob.set_gold_son();
cout<<"Enter land:";
ob.set_land_son();
cout<<"Money of son:"<<ob.get_money_son()<<endl;
cout<<"Gold of son:"<<ob.get_gold_son()<<endl; cout<<"Land
of son:"<<ob.get_land_son()<<endl; cout<<"Publicly inherited
grandson class:\n"; grandson ob_grandson;
ob_grandson.set_money_son(); ob_grandson.set_gold_son();
cout<<"Enter land :"; ob_grandson.set_land_son();
cout<<"Money of
grandson:"<<ob_garndson.get_money_son()<<endl;
cout<<"Gold of grandson:"<<ob_grandson.get_gold_son()<<endl;
cout<<"Land of grandson:"<<ob_grandson.get_land_son()<<endl;
return 0;
}
*/

/*
#include<iostream>
using namespace std;
class father
{
int money;
protected: int
gold;
public: int land;
void set_money()
{
cout <<"Enter money:";
cin>>money;
}
int get_money()
{
return money;
}
};
class son : public father
{
public:
int x;
int set_gold_son()
{
cout<<"Deposit gold:";
cin >>x;
gold=x;
}
int get_gold_son()
{
return gold;
}
};
class grandson: protected son
{
public:
int x;
int set_money_gson()
{
set_money();
}
int get_money_gson()
{
get_money();
}
int set_gold_gson()
{
set_gold_son();
}
int get_gold_gson()
{
get_gold_son();
}
int set_land_gson()
{ cin>>l
and;
}
int get_land_gsoni()
{
return land;
}
};
int main()
{ son ob;
cout<<"Publicly inherited son class:\n";
ob.set_money(); ob.set_gold_son();
cout<<"Enter land :";
cin>>ob.land;
cout<<"Money of son:"<<ob.get_money()<<endl;
cout<<"Gold of son:"<<ob.get_gold_son()<<endl;
cout<<"Land of son:"<<ob.land<<endl;
cout<<"Protectedly inherited grandson class:\n";
grandson ob_grandson;
ob_grandson.set_money_gson();
ob_nati.set_gold_gson(); cout<<"Enter land :";
ob_gson.set_land_gson();
cout<<"Money of grandson:"<<ob_gson.get_money_gson()<<endl;
cout<<"Gold of grandson:"<<ob_gson.get_gold_gson()<<endl;
cout<<"Land of grandson:"<<ob_gson.get_land_gson()<<endl;
return 0;
}
*/

/*
#include<iostream>
using namespace std;
class father
{
int money; protected:
int gold; public:
int land; int
set_money()
{
cout <<"Enter money:";
cin>>money;
}
int get_money()
{
return money;
}
};
class son : protected father
{
public: int
get_money_son()
{
get_money();
}
int set_money_son()
{
set_money();
}
int x;
void set_gold_son()
{
cout<<"Deposit gold:";
cin >>x;
gold=x;
}
int get_gold_son()
{
return gold;
}
void set_land_son()
{ cin >>
x;
land=x;
}
int get_land_son()
{
return land;
}
};
class grandson: protected son
{
public: int
set_money_gson()
{
set_money_son();
}
int get_money_gson()
{
get_money_son();
}
int set_gold_gson()
{
set_gold_son();
}
int get_gold_gson()
{
get_gold_son();
}
int set_land_gson()
{
set_land_son();
}
int get_land_gson()
{
get_land_son();
}
};
int main()
{ son ob;
cout<<"Protectedly inherited son class:\n";
ob.set_money_son(); ob.set_gold_son();
cout<<"Enter land:"; ob.set_land_son();
cout<<"Money of son:"<<ob.get_money_son()<<endl;
cout<<"Gold of son:"<<ob.get_gold_son()<<endl; cout<<"Land
of son:"<<ob.get_land_son()<<endl; cout<<"Protectedly
inherited grandson class:\n";
grandson ob_gson;
ob_gson.set_money_gson() ;
ob_gson.set_gold_gson() ;
cout<<"Enter land :";
ob_gson.set_land_gson() ;
cout<<"Money of grandson:"<<ob_gson.get_money_gson() <<endl;
cout<<"Gold of grandson:"<<ob_gson.get_gold_gson() <<endl;
cout<<"Land of grandson:"<<ob_gson.get_land_gson() <<endl; return 0;
}

*/


/*

#include<iostream>
using namespace std;
class father
{
int money; protected:
int gold;
public:
int land;
void set_money()
{
cout <<"Enter money:";
cin>>money;
}
int get_money()
{
return money;
}
};
class son : private father
{
public: int
get_money_son()
{
get_money();
}
int set_money_son()
{
set_money();
}
int x;
void set_gold_son()
{
cout<<"Deposit gold:";
cin >>x; gold=x;
}
int get_gold_son()
{
return gold;
}
void set_land_son()
{ cin >>
x;
land=x;
}
int get_land_son()
{
return land;
}
};
class gson: protected son
{
public: int
get_money_gson()
{
get_money_son();
}
int set_money_gson()
{
set_money_son();
}
void set_gold_gson()
{
set_gold_son();
}
int get_gold_gson()
{
get_gold_son();
}
void set_land_gson()
{
set_land_son();
}
int get_land_gson()
{
get_land_son();
}
};
int main()
{ son ob;
cout<<"Privately inherited son class:\n";
ob.set_money_son();
ob.set_gold_son(); cout<<"Enter
land:"; ob.set_land_son();
cout<<"Money of son:"<<ob.get_money_son()<<endl;
cout<<"Gold of son:"<<ob.get_gold_son()<<endl; cout<<"Land
of son:"<<ob.get_land_son()<<endl; cout<<"Protectedly
inherited grandson class:\n";
grandson ob_gson; ob_gson.set_money_gson();
ob_gson.set_gold_gson(); cout<<"Enter land :";
ob_gson.set_land_gson(); cout<<"Money of
grandson:"<<ob_gson.get_money_gson()<<endl; cout<<"Gold of
grandson:"<<ob_gson.get_gold_gson()<<endl; cout<<"Land of
grandson:"<<ob_gson.get_land_gson()<<endl;
return 0;
}

*/

/*
#include<iostream>
using namespace std;
class father
{
int money; protected:
int gold; public:
int land; void
set_money()
{
cout <<"Enter money:";
cin>>money;
}
int get_money(){
return money;
}
};
class son : public father
{
public:
int x;
void set_gold_son()
{
cout<<"Deposit gold:";
cin >>x;
gold=x;
}
int get_gold_son()
{
return gold;
}
};
class grandson: private son
{
public:
void set_money_gson()
{
set_money();
}
int get_money_gson(){
get_money();
}
void set_gold_gson()
{
set_gold_son();
}
int get_gold_gson()
{
get_gold_son();
}
void set_land()
{
cout<<"Enter land of grandson:";
cin>>land;
}
int get_land(){
return land;
}
};
int main()
{ son ob;
cout<<"Publicly inherited son class:\n";
ob.set_money(); ob.set_gold_son();
cout<<"Enter land :";
cin>>ob.land;
cout<<"Money of son:"<<ob.get_money()<<endl;
cout<<"Gold of son:"<<ob.get_gold_son()<<endl;
cout<<"Land of son:"<<ob.land<<endl; cout<<"Privately
inherited grandson class:\n";
nati ob_gson;
ob_gson.set_money_gson();
ob_gson.set_gold_gson();
ob_gson.set_land();
cout<<"Money of grandson:"<<ob_gson.get_money_gson()<<endl;
cout<<"Gold of grandson:"<<ob_gson.get_gold_gson()<<endl;
cout<<"Land of grandson:"<<ob_gson.get_land()<<endl;
return 0;
}
*/

/*
#include<iostream>
using namespace std;
class father
{
int money; protected:
int gold; public:
int land;
int set_money()
{
cout <<"Enter money:";
cin>>money;
}
int get_money()
{
return money;
}
};
class son : protected father
{
public: int
get_money_son()
{
get_money();
}
int set_money_son()
{
set_money();
}
int x;
void set_gold_son()
{
cout<<"Deposit gold:";
cin >>x; gold=x;
}
int get_gold_son()
{
return gold;
}
void set_land_son()
{ cin >>
x;
land=x;
}
int get_land_son()
{
return land;
}
};
class grandson: private son
{
public: int
set_money_gson()
{
set_money_son();
}
int get_money_gson()
{
get_money_son();
}
int set_gold_gson()
{
set_gold_son();
}
int get_gold_gson()
{
get_gold_son();
}
int set_land_gson()
{
set_land_son();
}
int get_land_gson()
{
get_land_son();
}
};
int main()
{ son ob;
cout<<"Protectedly inherited son class:\n";
ob.set_money_son(); ob.set_gold_son();
cout<<"Enter land:"; ob.set_land_son();
cout<<"Money of son:"<<ob.get_money_son()<<endl;
cout<<"Gold of son:"<<ob.get_gold_son()<<endl;
cout<<"Land of son:"<<ob.get_land_son()<<endl;
cout<<"Privately inherited grandson class:\n";
grandson ob_gson; ob_gson.set_money_gson() ;
ob_gson.set_gold_gson() ; cout<<"Enter land :";
ob_gson.set_land_gson() ;
cout<<"Money of grandson:"<<ob_gson.get_money_gson() <<endl;
cout<<"Gold of grandson:"<<ob_gson.get_gold_gson() <<endl;
cout<<"Land of grandson:"<<ob_gson.get_land_gson() <<endl;
return 0;
}
*/

/*
#include<iostream>
using namespace std;
class father
{
int money; protected:
int gold;
public:
int land;
void set_money()
{
cout <<"Enter money:";
cin>>money;
}
int get_money()
{
return money;
}
};
class son : private father
{
public: int
get_money_son()
{
get_money();
}
int set_money_son()
{
set_money();
}
int x;
void set_gold_son()
{
cout<<"Deposit gold:";
cin >>x;
gold=x;
}
int get_gold_son()
{
return gold;
}
void set_land_son()
{ cin >>
x;
land=x;
}
int get_land_son()
{
return land;
}
};
class grandson: private son
{
public: int
get_money_gson()
{
get_money_son();
}
int set_money_gson()
{
set_money_son();
}
void set_gold_gson()
{
set_gold_son();
}
int get_gold_gson()
{
get_gold_son();
}
void set_land_gson()
{
set_land_son();
}
int get_land_gson()
{
get_land_son();
}
};
int main()
{ son ob;
cout<<"Privately inherited son class:\n";
ob.set_money_son();
ob.set_gold_son(); cout<<"Enter
land:"; ob.set_land_son();
cout<<"Money of son:"<<ob.get_money_son()<<endl;
cout<<"Gold of son:"<<ob.get_gold_son()<<endl; cout<<"Land
of son:"<<ob.get_land_son()<<endl; cout<<"Privately
inherited grandson class:\n";
grandson ob_gson;
ob_gson.set_money_gson();
ob_gson.set_gold_gson();
cout<<"Enter land :";
ob_gson.set_land_gson();
cout<<"Money of grandson:"<<ob_gson.get_money_gson()<<endl; cout<<"Gold of
grandson:"<<ob_gson.get_gold_gson()<<endl;
cout<<"Land of
grandson:"<<ob_gson.get_land_gson()<<endl; return 0;

*/
