# Mars Exploration

A space explorer's ship crashed on Mars! They send a series of SOS messages to Earth for help.

Letters in some of the SOS messages are altered by cosmic radiation during transmission. Given the signal received by Earth as a string, determine how many letters of the SOS message have been changed by radiation.

## Example

The original message was `SOSSOS`. Two of the message's characters were changed in transit.

## Function Description

Complete the `marsExploration` function in the editor below.

### `marsExploration` has the following parameter(s):

- `string s`: the string as received on Earth

### Returns

- `int`: the number of letters changed during transmission

### Input Format

There is one line of input: a single string.

### Constraints

- The string will contain only uppercase English letters, ascii[A-Z].

## Explanation

### Sample 0

Input: `SOSSPSSQSSOR`

Expected signal: `SOSSOSSOSSOS`  
Received signal: `SOSSPSSQSSOR`

We print the number of changed letters, which is `3`.

### Sample 1

Input: `SOSSOT`

Expected Signal: `SOSSOS`  
Received Signal: `SOSSOT`

We print the number of changed letters, which is `1`.