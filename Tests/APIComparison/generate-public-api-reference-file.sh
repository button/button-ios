#!/bin/sh

# Since clang generates a lot of errors that we are not interested in let's suppress error output
exec 2> /dev/null

SCRIPT_SUBDIR="APIComparison"
BTN_PUBLIC_API_FILE="${SCRIPT_SUBDIR}/public-api-reference"
TMP_FILE="${SCRIPT_SUBDIR}/tmp"
FRAMEWORK_HEADERS_DIR="./../Button.framework/Headers"
METHOD_SIGNATURE_PATTERN="[0-9]{1} [-+]{1} [a-zA-Z0-9:]+ "

# If argument was provided use it as an output file
if [ $# -eq 1 ]; then
    BTN_PUBLIC_API_FILE=$1
fi

# Run script that lists all public API, grep Method declarations and save it to tmp file
clang -cc1 -w -ast-dump -x objective-c "${FRAMEWORK_HEADERS_DIR}/Button.h" | grep -Eo "${METHOD_SIGNATURE_PATTERN}" > ${TMP_FILE}

# Getting rid of unneeded chars captured by grep and save to output file
sed 's .\{2\}  ' ${TMP_FILE} > ${BTN_PUBLIC_API_FILE}

rm ${TMP_FILE}
