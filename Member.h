#include <vector>
#ifndef AA_hpp
#define AA_hpp
class Member
{
    Member(){};
    void follow (const Member &other){}
    int count(){return 0;}
    void unfollow(const Member &other){}
    int numFollowers(){return 0;}
    int numFollowing(){return 0;}
};
#endif