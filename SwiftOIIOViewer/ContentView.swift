//
//  ContentView.swift
//  SwiftOIIOViewer
//
//  Created by mel on 04/08/2021.
//

import SwiftUI
import SwiftOIIO

struct ContentView: View {
    
    let image:NSImage?
    var body: some View {
        Image(nsImage: image ?? NSImage())
            .resizable()
            .frame(maxWidth: .infinity, maxHeight: .infinity)
    }
    
    init(){
        let url = URL(fileURLWithPath: "Organic_0018.exr")
        print(url.absoluteURL)
        self.image = NSImage.oiio_force(withContentsOf: url)

//        let rep = self.image?.oiio_findOIIOImageRep()
//        print(rep)
//        print(self.image?.oiio_metadata())

        
    }
    
    
}


struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ContentView()
    }
}
