#!/bin/bash
read -p "Enter the target URL (e.g. http://example.com): " TARGET

WORDLIST="wordlist/http wordlist.txt"

if [ ! -f "$WORDLIST" ]; then
  echo "Wordlist file not found: $WORDLIST"
  exit 1
fi

TARGET="${TARGET%/}"

GREEN='\033[0;32m'
NC='\033[0m'

while IFS= read -r dir; do
  dir="${dir%/}"
  URL="$TARGET/$dir"

  STATUS=$(curl -o /dev/null -s -w "%{http_code}" "$URL")

  if [ "$STATUS" != "404" ]; then
    echo -e "${GREEN}Found: $URL (Status: $STATUS)${NC}"
  fi
done < "$WORDLIST"

