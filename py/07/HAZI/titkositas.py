#!/usr/bin/env python3


def main():
    text = "4D69 61 6E657665 616E6E616B 61 68656C7969 6B617063736F6C6F6B6F7A706F6E746E616B2C 61686F6C 6D616A646E656D 656C6B617074616B"
    hex_parts = text.split()

    # A hexadecimális számokból karakterek visszaállítása
    decoded_text = ''.join([bytes.fromhex(part).decode('utf-8') for part in hex_parts])

    print(decoded_text)


#############################################################################

if __name__ == "__main__":
    main()