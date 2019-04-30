if [[ "$CI" ]]; then
  echo "CI environment, access token not required"
  exit 0
else
  echo "Inserting Mapbox access token..."
  token_file=$SRCROOT/mapbox_access_token
  token="$(cat $token_file 2> /dev/null)" || token="$(cat ~/.mapbox 2> /dev/null)"
    if [ "$token" ]; then
      plutil -replace MGLMapboxAccessToken -string $token "$TARGET_BUILD_DIR/$INFOPLIST_PATH"
      echo "Token insertion successful"
    else
      echo \'error: Missing Mapbox access token\'
      echo "error: Get an access token from <https://www.mapbox.com/studio/account/tokens/>, then create a new file at $token_file that contains the access token."
      exit 1
    fi
fi
