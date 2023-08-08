#include <iostream>
#include <map>

using namespace std;

class Logger {
public:
    /**
    * @param timestamp: Timestamp
    * @param message: Message
    * @return: Whether the log can be printed
    */
    bool couldPrintMessage(int timestamp, string &message) {
        // --- write your code here ---
        bool result = false;
        it = cache.find(message);
        if (it == cache.end() || timestamp - it->second >= 10)
        {
            result = true;
            cache[message] = timestamp;
        }
        return result;
    }
private:
    map<string, int> cache;
    map<string, int>::iterator it;
};