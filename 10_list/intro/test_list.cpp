#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "List.h"
#include <doctest.h>


TEST_CASE("Elements can be inserted") 
{
	LinkedList<int> ll{ 10, 20, 30, 40, 50 };

	REQUIRE(ll.size() == 5);
	// добавляем на место с индексом 2 число 25
	ll.insert(2, 25);
	CHECK(ll == LinkedList{ 10, 20, 25, 30, 40, 50 });
	// добавляем на место с индексом 0 число 8
	ll.insert(0, 8);
	CHECK(ll == LinkedList<int>{ 8, 10, 20, 25, 30, 40, 50 });
	// добавляем на место с индексом 7 число 60
	ll.insert(7, 60);
	CHECK(ll == LinkedList<int>{ 8, 10, 20, 25, 30, 40, 50, 60 });

	REQUIRE(ll.size() == 8);
}


TEST_CASE("Elements can be removed") 
{
	LinkedList<int> ll{ 8, 10, 20, 25, 30, 40, 50, 60 };

	ll.remove(3);
	CHECK(ll == LinkedList<int>{ 8, 10, 20, 30, 40, 50, 60 });

	ll.remove(0);
	CHECK(ll == LinkedList<int>{ 10, 20, 30, 40, 50, 60 });

	ll.remove(5);
	CHECK(ll == LinkedList<int>{10, 20, 30, 40, 50});

	REQUIRE(ll.size() == 5);
}


TEST_CASE("Deleting/pasting elements outside the array does nothing") 
{
	LinkedList<int> ll{ 10, 20, 30, 40, 50 };

	REQUIRE(ll.insert(99, 0) == false);
	CHECK(ll == LinkedList{ 10, 20, 30, 40, 50 });

	REQUIRE(ll.remove(99) == false);
	CHECK(ll == LinkedList{ 10, 20, 30, 40, 50 });
}


TEST_CASE("Getting elements by index") 
{
	LinkedList<int> ll{ 10, 20, 30, 40, 50 };

	CHECK(ll.get(0)->data == 10);
	CHECK(ll.get(2)->data == 30);
	CHECK(ll.get(4)->data == 50);
	CHECK(ll.get(99) == nullptr);
}


TEST_CASE("Deep copying") 
{
	LinkedList<int> ll{ 10, 20, 30, 40, 50 };
	LinkedList<int> ll_cloned;

	ll.clone(&ll_cloned);

	CHECK(ll == ll_cloned);
}