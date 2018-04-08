#ifndef AA_hpp
#define AA_hpp
class Member
{
    Member(){};
    void follow (const Member &other);
    int count();
    void unfollow(const Member &other);
    int numFollowers();
    int numFollowing();
};
#include <vector>
void Member::follow(const Member &other)
{

}

int Member::count() {
    return 0;
}



void Member::unfollow(const Member &other) {

}

int Member::numFollowers() {
    return 0;
}

int Member::numFollowing() {
    return 0;
}
#endif