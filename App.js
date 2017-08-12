import React, { Component } from "react";
import { View, Text } from "react-native";
import { Font } from "expo";

import { jsComponent as Root } from "./lib/js/re/root";

export default class App extends Component {
  render() {
    return (
      <View style={{ flex: 1 }}>
        <Root />
      </View>
    );
    return;
  }
}
