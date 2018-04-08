class Member
{
    Member() noexcept;
    void follow (const Member &other);
    int count();
    void unfollow(const Member &other);
    int numFollowers();
    int numFollowing();
};