open ReactNative;

let component = ReasonReact.statelessComponent "KenWheelerRoot";

let styles = 
  StyleSheet.create
    Style.(
      {
        "container": style [flex 1.],
        "content": style [ flex 1., alignItems `center, justifyContent `center],
        "image": style [ width 400., height 400. ]
      }
    );


let make _children => {
  ...component,
  render: fun _self => {
    <ScrollView
      style=styles##container
      contentContainerStyle=styles##content
      maximumZoomScale=9.
      mimimumZoomScale=1.
    >
      <Image
        style=styles##image
        source=(
          URI Image.(
            imageURISource uri::("https://pbs.twimg.com/profile_images/896226414935941120/iSYbIN88_400x400.jpg")
            ()
          )
        )
      />
    </ScrollView>
  }
};

let jsComponent = ReasonReact.wrapReasonForJs ::component (fun _props => make () );
