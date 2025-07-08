class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck){
        sort(deck.begin(), deck.end());
        deque<int> result;


        result.push_front(deck.back());
        deck.pop_back();


        while (!deck.empty()) {
            result.push_front(result.back());
            result.pop_back();
            result.push_front(deck.back());
            deck.pop_back();
        }


        vector<int> orderedDeck(result.begin(), result.end());
        return orderedDeck;
    }
};
