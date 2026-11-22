// 2 Add Two Numbers
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *c = new ListNode(-1);
        ListNode * result = c;
        int x = 0, y = 0, z = 0; // x in l1, y in l2, z inc1

        while (l1 != nullptr || l2 != nullptr)
        {
            x = 0, y = 0;

            if (l1 != nullptr)
            {
                x = l1->val;
                l1 = l1->next;
            }
            if (l2 != nullptr)
            {
                y = l2->val;
                l2 = l2->next;
            }

            int sum = x + y + z;
            z = sum / 10;
            sum = sum - z * 10;

            ListNode* nw = new ListNode(sum);
            c->next = nw;
            c = c->next;

            
        }
        if(z) c->next = new ListNode(1);
        return result->next;
    }
};