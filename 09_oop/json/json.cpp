#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>


using namespace std;


struct BasicToken
{
    string value;
};
    

struct StringToken : public BasicToken
{
    StringToken(string str)
    { 
        value = "\"" + str + "\"";
    }
};


struct NumToken : BasicToken
{
    template <typename T>

    NumToken(T num)
    {
        value = "\"" + to_string(num) + "\"";
    }
};


struct BoolToken : BasicToken
{
    BoolToken(bool bl)
    {
        value = bl ? "\"true\"" : "\"false\"";
    }
};


struct ArrayToken : BasicToken
{
    ArrayToken(initializer_list<BasicToken> arr)
    {
        value = "[\n        "; //Пустые места, потому что табуляция почему-то делает отступ в 6 побелов
        for (size_t i = 1; auto k : arr)
        {
            value.append(k.value);
            if (i != arr.size())
            {
                value.append(",\n        ");
                i++;
            }
        }
        value.append("\n    ]");
    }
};


struct Json 
{
    unordered_map<string, BasicToken> tokens;

    Json(unordered_map<string, BasicToken> input)
    {
        tokens = input;
    }

    string output()
    {
        string out = "{\n";
        for (size_t i = 1; const auto & elem : tokens)
        {
            out.append("    \"" + elem.first + "\": " + elem.second.value);
            if (i != tokens.size())
            {
                out.append(",\n");
                i++;
            }
        }
        out.append("\n}");
        return out;
    }
};

/*
int main()
{
    Json json
    {
        unordered_map<string, BasicToken>
        {
            {
                "key", BoolToken(true)
            },
            {
                "str_token", StringToken("Hello, World!")
            },
            {
                "bool_token", BoolToken(true)
            },
            {
                "array_token", ArrayToken
                (
                    {
                        NumToken(88005553535), 
                        StringToken("It works!"),
                        BoolToken(false)
                    }
                )
            }
        }
    };

    //cout << json.output() << endl;

    Json json2
    {
        unordered_map <string, BasicToken>
        {
            {"int_token", NumToken(228)}
        }
    };
    
    cout << json.output() << endl;

    return 0;
}
*/