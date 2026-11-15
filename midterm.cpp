#include <cctype>
#include <vector>
#include <string>
#include <cstddef>

std::vector<std::string> Split(const std::string& s, char delim){
    std::vector<std::string> list;
    std::string word="";
    for(std::size_t i=0;i<s.size();i++){
	if(s.at(i)!=delim){
	    word+=s.at(i);
	}
	if(s.at(i)==delim){
	    list.push_back(word);
	    word="";
	}
    }
    return list;
}

int* LastBelow(std::vector<int*>& values, int limit){
    if(values.empty())
    return nullptr;
    int* lowest=values.at(0);
    int count=-1;
    for(std::size_t i=0;i<values.size();i++){
	if(*values.at(i)<limit){
	    lowest=values.at(i);
	    count=i;
	}
    }
    if(count==-1)
    return nullptr;
    return lowest;

}

bool Unpack(unsigned int color, unsigned int& red, unsigned int& green, unsigned int& blue){
    for(unsigned int i=24; i<=31;i++){
	if((color&(1u<<i))!=0){
	    return false;
	}
    }

    for(unsigned int i=0;i<=7;i++){
	if((color&(1u<<i))!=0)
	blue |= (1u<<i);
    }

    for(unsigned int i=8;i<=15;i++){
        if((color&(1u<<i))!=0)
        green |= (1u<<(i-8));
    }

    for(unsigned int i=16;i<=23;i++){
        if((color&(1u<<i))!=0)
        red |= (1u<<(i-16));
    }

return true;


}
