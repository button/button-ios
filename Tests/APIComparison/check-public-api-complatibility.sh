#!/bin/sh

SCRIPT_SUBDIR="APIComparison"
REFERENCE_FILE="$SCRIPT_SUBDIR/public-api-reference"
CURRENT_FILE="$SCRIPT_SUBDIR/public-api-current"
PUBLIC_API_DIFF_FILE="$SCRIPT_SUBDIR/public-api-diff"

# Generating file with current public API
${SOURCE_ROOT}/${SCRIPT_SUBDIR}/generate-public-api-reference-file.sh ${CURRENT_FILE}

# Comparing public API reference file and current API file
comm -3 ${REFERENCE_FILE} ${CURRENT_FILE} > ${PUBLIC_API_DIFF_FILE}

# In case there is a diff put it in a diff file and exit with code 1
if [[ -s ${PUBLIC_API_DIFF_FILE} ]] ; then
    cat ${PUBLIC_API_DIFF_FILE}
    exit 1
else
    rm ${CURRENT_FILE}
    rm ${PUBLIC_API_DIFF_FILE}
fi
