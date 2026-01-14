#ifndef DUALHAND_H
#define DUALHAND_H

template <typename LeftType, typename RightType>
class DualHand {
private:
    LeftType& left;
    RightType& right;

public:
    DualHand(LeftType& l, RightType& r)
        : left(l), right(r) {}

    LeftType& getLeft() const { return left; }
    RightType& getRight() const { return right; }

    void setLeft(LeftType& l) { left = l; }
    void setRight(RightType& r) { right = r; }
};


#endif
