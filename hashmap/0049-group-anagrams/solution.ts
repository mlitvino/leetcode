function groupAnagrams(strs: string[]): string[][] {
  let res: string[][] = [];
  const idxMap = new Map<string, number>();

  for (const word of strs) {
    const wordKey = word.split('').sort().join('');

    if (idxMap.has(wordKey)) {
      const i = idxMap.get(wordKey)!;
      res[i] = [...res[i], word];
    } else {
      const i = res.length;
      res[i] = [word];
      idxMap.set(wordKey, i);
    }
  };

  return res;
};
