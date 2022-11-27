const binarySearch = require('./binarySearch.json');
const _ = require('lodash');

const topicSuite = {
    'Binary Search': binarySearch,
    'Array': null
}

const topic = "Binary Search";
const difficulty = "Medium";

const question = _.sample(topicSuite[topic].filter(t => difficulty === t.Difficulty));

console.log(question);