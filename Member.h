#include <vector>
#ifndef AA_hpp
#define AA_hpp
class Member
{
    public:
    Member(){};
    void follow (const Member &other){}
    static int count(){return 0;}
    void unfollow(const Member &other){}
    int numFollowers(){return 0;}
    int numFollowing(){return 0;}

};
#endif