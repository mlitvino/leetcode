function isPalindrome(s: string): boolean {
    let parsed = [];

    for (const v of s) {
        if (isAlphanumeric(v)) {
            parsed.push(v.toLowerCase());
        }
    }

    for (let start = 0, end = parsed.length - 1; start <= end;) {
        if (!isAlphanumeric(parsed[start])) {
            start++;
            continue;
        }
        if (!isAlphanumeric(parsed[end])) {
            end--;
            continue;
        }
        if (parsed[start++] !== parsed[end--]) {
            return false;
        }
    }

    return true;
};

function isAlphanumeric(v: string) {
    const asciiN = v.charCodeAt(0) - '0'.charCodeAt(0);
    const isNumber = 0 <= asciiN && asciiN < 10;

    return isNumber || v.toLowerCase() !== v.toUpperCase();
}
