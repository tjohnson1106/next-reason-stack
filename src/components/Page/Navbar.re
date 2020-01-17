open NavbarStyles;

[@react.component]
let make = () => {
  <nav className="hero-head">
    <nav id="topnav" className=topNavStyles>
      <div className="container">
        <div className=navbarBrand>
          <Next.Link href="/">
            // custom styles - from NavbarStyles - implementation

              <a className=subtitle>
                {ReasonReact.string(
                   "Up and running from Reason React and NextJS",
                 )}
              </a>
            </Next.Link>
          <span className=navbarBurger> <span /> <span /> <span /> </span>
        </div>
        <div id="navbarMenu" className="navbar-menu">
          <div className="navbar-end">
            <div className="navbar-item">
              <Next.Link href="/about">
                <a> {ReasonReact.string("About")} </a>
              </Next.Link>
            </div>
            <div className="navbar-item">
              <Next.Link href="/contact">
                <a> {ReasonReact.string("contact")} </a>
              </Next.Link>
            </div>
          </div>
        </div>
      </div>
    </nav>
  </nav>;
};