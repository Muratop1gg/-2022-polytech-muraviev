#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "json.cpp"
#include <doctest.h>
#include <iostream>
#include <unordered_map>


using namespace std;


TEST_CASE("Generic tests") {
    CHECK_EQ(Json{ unordered_map<string, BasicToken>
        {} }.output(),
        "{\n\n}");

    CHECK_EQ(Json{ unordered_map<string, BasicToken>{
        {"int_token", NumToken(100500)}}
        }.output(),
            "{\n    \"int_token\": \"100500\"\n}");

    CHECK_EQ(Json{ unordered_map<string, BasicToken>{
        {"str_token", StringToken("Hello, World!")}}
        }.output(),
            "{\n    \"str_token\": \"Hello, World!\"\n}");

    CHECK_EQ(Json{ unordered_map<string, BasicToken>{
        {"bool_token", BoolToken(true)}}
        }.output(),
            "{\n    \"bool_token\": \"true\"\n}");

    CHECK_EQ(Json{ unordered_map<string, BasicToken>{
        {"array_token", ArrayToken({NumToken(88005553535),StringToken("It works!"),BoolToken(false)})}} }.output(),
            "{\n    \"array_token\": [\n        \"88005553535\",\n        \"It works!\",\n        \"false\"\n    ]\n}");

    CHECK_EQ(Json{ unordered_map<string, BasicToken>{
        {"bool_token", BoolToken(true)},
        {"str_token", StringToken("Hello, World!")},
        {"int_token", NumToken(100500)}} }.output(),
            "{\n    \"bool_token\": \"true\",\n    \"str_token\": \"Hello, World!\",\n    \"int_token\": \"100500\"\n}");
};