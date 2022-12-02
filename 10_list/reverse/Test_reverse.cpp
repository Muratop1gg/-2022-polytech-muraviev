#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "Reverse.h"
#include <deque>
#include <doctest.h>


using namespace std;


deque<int> ll_to_deque(Node** head) 
{
    auto tmp = *head;
    deque<int> out{};
    while (tmp != nullptr) 
    {
        out.push_front(tmp->data);
        tmp = tmp->next;
    }
    
    return out;
}


TEST_CASE("Reverse") 
{
    deque<int> v1{ 9, 8, 7, 6, 5, 4, 3, 2, 1 };
    deque<int> v2{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    deque<int> v3{ 1, 7, 6, 5, 4, 3, 2, 8, 9 };

    Node* head = generate(9);
    CHECK(v1 == ll_to_deque(&head));

    reverse(&head);
    CHECK(v2 == ll_to_deque(&head));

    reverse(&head, 2, 7);
    CHECK(v3 == ll_to_deque(&head));
}